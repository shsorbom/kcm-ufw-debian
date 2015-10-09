#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ufw.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UFW_H
#define UI_UFW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QPushButton>
#include "ksqueezedtextlabel.h"
#include "ruleslist.h"
#include "statusbox.h"

QT_BEGIN_NAMESPACE

class Ui_Ufw
{
public:
    QGridLayout *gridLayout;
    UFW::StatusBox *configBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QCheckBox *ufwEnabled;
    QLabel *ipv6EnabledLabel;
    QCheckBox *ipv6Enabled;
    QLabel *defaultOutgoingPolicyLabel;
    QComboBox *defaultOutgoingPolicy;
    QLabel *defaultIncomingPolicyLabel;
    QComboBox *defaultIncomingPolicy;
    QLabel *ufwLoggingLevelLabel;
    QComboBox *ufwLoggingLevel;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    UFW::RulesList *ruleList;
    QpushButton *addRuleButton;
    QpushButton *editRuleButton;
    QpushButton *removeRuleButton;
    QpushButton *moveRuleUpButton;
    QpushButton *moveRuleDownButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *modulesList;
    KSqueezedTextLabel *statusLabel;
    QToolButton *refreshButton;
    QToolButton *profilesButton;
    QToolButton *logButton;

    void setupUi(QWidget *Ufw)
    {
        if (Ufw->objectName().isEmpty())
            Ufw->setObjectName(QStringLiteral("Ufw"));
        Ufw->resize(614, 569);
        gridLayout = new QGridLayout(Ufw);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        configBox = new UFW::StatusBox(Ufw);
        configBox->setObjectName(QStringLiteral("configBox"));
        configBox->setFlat(false);
        formLayout = new QFormLayout(configBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(configBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        ufwEnabled = new QCheckBox(configBox);
        ufwEnabled->setObjectName(QStringLiteral("ufwEnabled"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ufwEnabled);

        ipv6EnabledLabel = new QLabel(configBox);
        ipv6EnabledLabel->setObjectName(QStringLiteral("ipv6EnabledLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ipv6EnabledLabel);

        ipv6Enabled = new QCheckBox(configBox);
        ipv6Enabled->setObjectName(QStringLiteral("ipv6Enabled"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ipv6Enabled);

        defaultOutgoingPolicyLabel = new QLabel(configBox);
        defaultOutgoingPolicyLabel->setObjectName(QStringLiteral("defaultOutgoingPolicyLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, defaultOutgoingPolicyLabel);

        defaultOutgoingPolicy = new QComboBox(configBox);
        defaultOutgoingPolicy->setObjectName(QStringLiteral("defaultOutgoingPolicy"));

        formLayout->setWidget(2, QFormLayout::FieldRole, defaultOutgoingPolicy);

        defaultIncomingPolicyLabel = new QLabel(configBox);
        defaultIncomingPolicyLabel->setObjectName(QStringLiteral("defaultIncomingPolicyLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, defaultIncomingPolicyLabel);

        defaultIncomingPolicy = new QComboBox(configBox);
        defaultIncomingPolicy->setObjectName(QStringLiteral("defaultIncomingPolicy"));

        formLayout->setWidget(3, QFormLayout::FieldRole, defaultIncomingPolicy);

        ufwLoggingLevelLabel = new QLabel(configBox);
        ufwLoggingLevelLabel->setObjectName(QStringLiteral("ufwLoggingLevelLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ufwLoggingLevelLabel);

        ufwLoggingLevel = new QComboBox(configBox);
        ufwLoggingLevel->setObjectName(QStringLiteral("ufwLoggingLevel"));

        formLayout->setWidget(4, QFormLayout::FieldRole, ufwLoggingLevel);


        gridLayout->addWidget(configBox, 0, 0, 1, 4);

        tabWidget = new QTabWidget(Ufw);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setIconSize(QSize(22, 22));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ruleList = new UFW::RulesList(tab);
        ruleList->setObjectName(QStringLiteral("ruleList"));
        ruleList->setRootIsDecorated(false);
        ruleList->setUniformRowHeights(true);
        ruleList->setItemsExpandable(false);
        ruleList->setAllColumnsShowFocus(true);
        ruleList->setExpandsOnDoubleClick(false);

        gridLayout_2->addWidget(ruleList, 0, 0, 7, 1);

        addRuleButton = new QpushButton(tab);
        addRuleButton->setObjectName(QStringLiteral("addRuleButton"));

        gridLayout_2->addWidget(addRuleButton, 0, 1, 1, 1);

        editRuleButton = new QpushButton(tab);
        editRuleButton->setObjectName(QStringLiteral("editRuleButton"));

        gridLayout_2->addWidget(editRuleButton, 1, 1, 1, 1);

        removeRuleButton = new QpushButton(tab);
        removeRuleButton->setObjectName(QStringLiteral("removeRuleButton"));

        gridLayout_2->addWidget(removeRuleButton, 2, 1, 1, 1);

        moveRuleUpButton = new QpushButton(tab);
        moveRuleUpButton->setObjectName(QStringLiteral("moveRuleUpButton"));

        gridLayout_2->addWidget(moveRuleUpButton, 3, 1, 1, 1);

        moveRuleDownButton = new QpushButton(tab);
        moveRuleDownButton->setObjectName(QStringLiteral("moveRuleDownButton"));

        gridLayout_2->addWidget(moveRuleDownButton, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(73, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        modulesList = new QTreeWidget(tab_2);
        modulesList->setObjectName(QStringLiteral("modulesList"));
        modulesList->setRootIsDecorated(false);
        modulesList->setUniformRowHeights(true);
        modulesList->setItemsExpandable(false);
        modulesList->setSortingEnabled(true);
        modulesList->setAllColumnsShowFocus(true);
        modulesList->setExpandsOnDoubleClick(false);
        modulesList->header()->setDefaultSectionSize(64);

        verticalLayout_2->addWidget(modulesList);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 4);

        statusLabel = new KSqueezedTextLabel(Ufw);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QFont font;
        font.setItalic(true);
        statusLabel->setFont(font);

        gridLayout->addWidget(statusLabel, 2, 0, 1, 1);

        refreshButton = new QToolButton(Ufw);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        refreshButton->setAutoRaise(true);

        gridLayout->addWidget(refreshButton, 2, 1, 1, 1);

        profilesButton = new QToolButton(Ufw);
        profilesButton->setObjectName(QStringLiteral("profilesButton"));
        profilesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        profilesButton->setAutoRaise(true);

        gridLayout->addWidget(profilesButton, 2, 2, 1, 1);

        logButton = new QToolButton(Ufw);
        logButton->setObjectName(QStringLiteral("logButton"));
        logButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        logButton->setAutoRaise(true);

        gridLayout->addWidget(logButton, 2, 3, 1, 1);

        QWidget::setTabOrder(ufwEnabled, ipv6Enabled);
        QWidget::setTabOrder(ipv6Enabled, defaultOutgoingPolicy);
        QWidget::setTabOrder(defaultOutgoingPolicy, defaultIncomingPolicy);
        QWidget::setTabOrder(defaultIncomingPolicy, ufwLoggingLevel);
        QWidget::setTabOrder(ufwLoggingLevel, tabWidget);
        QWidget::setTabOrder(tabWidget, ruleList);
        QWidget::setTabOrder(ruleList, addRuleButton);
        QWidget::setTabOrder(addRuleButton, editRuleButton);
        QWidget::setTabOrder(editRuleButton, removeRuleButton);
        QWidget::setTabOrder(removeRuleButton, moveRuleUpButton);
        QWidget::setTabOrder(moveRuleUpButton, moveRuleDownButton);
        QWidget::setTabOrder(moveRuleDownButton, modulesList);
        QWidget::setTabOrder(modulesList, refreshButton);
        QWidget::setTabOrder(refreshButton, profilesButton);
        QWidget::setTabOrder(profilesButton, logButton);

        retranslateUi(Ufw);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ufw);
    } // setupUi

    void retranslateUi(QWidget *Ufw)
    {
        configBox->setTitle(tr2i18n("Configuration", 0));
        label_3->setText(tr2i18n("Firewall status:", 0));
        ufwEnabled->setText(tr2i18n("Enabled", 0));
        ipv6EnabledLabel->setText(tr2i18n("IPv6 support:", 0));
        ipv6Enabled->setText(tr2i18n("Enabled", 0));
        defaultOutgoingPolicyLabel->setText(tr2i18n("Default outgoing policy:", 0));
        defaultIncomingPolicyLabel->setText(tr2i18n("Default incoming policy:", 0));
        ufwLoggingLevelLabel->setText(tr2i18n("Logging level:", 0));
        QTreeWidgetItem *___qtreewidgetitem = ruleList->headerItem();
        ___qtreewidgetitem->setText(4, tr2i18n("Logging", 0));
        ___qtreewidgetitem->setText(3, tr2i18n("IPv6", 0));
        ___qtreewidgetitem->setText(2, tr2i18n("To", 0));
        ___qtreewidgetitem->setText(1, tr2i18n("From", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("Action", 0));
        addRuleButton->setText(tr2i18n("Add...", 0));
        editRuleButton->setText(tr2i18n("Edit...", 0));
        removeRuleButton->setText(tr2i18n("Remove", 0));
        moveRuleUpButton->setText(tr2i18n("Move Up", 0));
        moveRuleDownButton->setText(tr2i18n("Move Down", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("Rules", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = modulesList->headerItem();
        ___qtreewidgetitem1->setText(2, tr2i18n("NAT", 0));
        ___qtreewidgetitem1->setText(1, tr2i18n("Connection Tracking", 0));
        ___qtreewidgetitem1->setText(0, tr2i18n("Protocol", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Modules", 0));
        refreshButton->setText(tr2i18n("Refresh", 0));
        profilesButton->setText(tr2i18n("Profiles", 0));
        logButton->setText(tr2i18n("Show Log...", 0));
        Q_UNUSED(Ufw);
    } // retranslateUi

};

namespace Ui {
    class Ufw: public Ui_Ufw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UFW_H

