include_directories(${KDE4_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_BINARY_DIR})

set(kcm_ufw_SRCS kcm.cpp 
    ruledialog.cpp types.cpp 
    strings.cpp 
    rule.cpp 
    ruleslist.cpp 
    profile.cpp 
    appprofiles.cpp 
    statusbox.cpp 
    stackedwidget.cpp 
    combobox.cpp 
    lineedit.cpp 
    blocker.cpp 
    logviewer.cpp)
ki18n_wrap_ui(kcm_ufw_SRCS ufw.ui rulewidget.ui)
#kde4_add_plugin(kcm_ufw ${kcm_ufw_SRCS})

add_library(kcm_ufw MODULE ${kcm_ufw_SRCS})

target_link_libraries(kcm_ufw
                      KF5::Auth
                      KF5::ConfigWidgets
                      KF5::CoreAddons
#                      KF5::Crash
                      KF5::I18n
                      KF5::KIOCore
                      KF5::WidgetsAddons
                      )
install( TARGETS kcm_ufw  DESTINATION ${PLUGIN_INSTALL_DIR} )
install( FILES ufw.desktop  DESTINATION  ${SERVICES_INSTALL_DIR} )

#kde4_install_icons( ${DATA_INSTALL_DIR}/kufw/icons )
