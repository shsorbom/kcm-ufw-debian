#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'rulewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULEWIDGET_H
#define UI_RULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "combobox.h"
#include "ksqueezedtextlabel.h"
#include "stackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RuleWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QComboBox *ruleType;
    UFW::StackedWidget *stackedWidget;
    QWidget *page_2;
    QFormLayout *formLayout;
    QLabel *label_9;
    QComboBox *simplePolicy;
    QLabel *label_7;
    QComboBox *simpleDirection;
    QLabel *simpleLoggingLabel;
    QComboBox *simpleLogging;
    QSpacerItem *verticalSpacer_2;
    QComboBox *simpleProtocol;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_3x;
    QRadioButton *simplePortRadio;
    QLineEdit *lineEdit_5;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5x;
    QRadioButton *simpleProfileRadio;
    UFW::ComboBox *simpleProfile;
    QWidget *page_3;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QComboBox *advancedPolicy;
    QLabel *label_10;
    QComboBox *advancedDirection;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3x;
    QFormLayout *formLayout_4x;
    QLabel *label_5x;
    QRadioButton *advancedSrcAnyHostRadio;
    QHBoxLayout *horizontalLayout_6xa;
    QRadioButton *advancedSrcHostRadio;
    QLineEdit *lineEdit;
    QRadioButton *advancedSrcAnyPortRadio;
    QLabel *label_8x;
    QHBoxLayout *horizontalLayout_4x;
    QRadioButton *advancedSrcPortRadio;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6x;
    QRadioButton *advancedSrcProfileRadio;
    UFW::ComboBox *advancedSrcProfile;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QRadioButton *advancedDestAnyHostRadio;
    QHBoxLayout *horizontalLayout_6xb;
    QRadioButton *advancedDestHostRadio;
    QLineEdit *lineEdit_3;
    QRadioButton *advancedDestAnyPortRadio;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *advancedDestPortRadio;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *advancedDestProfileRadio;
    UFW::ComboBox *advancedDestProfile;
    QLabel *label_8;
    QLabel *label_15;
    QComboBox *advancedProtocol;
    QLabel *label_15x;
    QComboBox *advancedInterface;
    QLabel *advancedLoggingLabel;
    QComboBox *advancedLogging;
    QSpacerItem *verticalSpacer;
    KSqueezedTextLabel *statusLabel;

    void setupUi(QWidget *RuleWidget)
    {
        if (RuleWidget->objectName().isEmpty())
            RuleWidget->setObjectName(QStringLiteral("RuleWidget"));
        RuleWidget->resize(526, 494);
        verticalLayout_2 = new QVBoxLayout(RuleWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ruleType = new QComboBox(RuleWidget);
        ruleType->setObjectName(QStringLiteral("ruleType"));

        verticalLayout_2->addWidget(ruleType);

        stackedWidget = new UFW::StackedWidget(RuleWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout = new QFormLayout(page_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        simplePolicy = new QComboBox(page_2);
        simplePolicy->setObjectName(QStringLiteral("simplePolicy"));

        formLayout->setWidget(0, QFormLayout::FieldRole, simplePolicy);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        simpleDirection = new QComboBox(page_2);
        simpleDirection->setObjectName(QStringLiteral("simpleDirection"));

        formLayout->setWidget(1, QFormLayout::FieldRole, simpleDirection);

        simpleLoggingLabel = new QLabel(page_2);
        simpleLoggingLabel->setObjectName(QStringLiteral("simpleLoggingLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, simpleLoggingLabel);

        simpleLogging = new QComboBox(page_2);
        simpleLogging->setObjectName(QStringLiteral("simpleLogging"));

        formLayout->setWidget(6, QFormLayout::FieldRole, simpleLogging);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::LabelRole, verticalSpacer_2);

        simpleProtocol = new QComboBox(page_2);
        simpleProtocol->setObjectName(QStringLiteral("simpleProtocol"));

        formLayout->setWidget(5, QFormLayout::FieldRole, simpleProtocol);

        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_13);

        horizontalLayout_3x = new QHBoxLayout();
        horizontalLayout_3x->setSpacing(6);
        horizontalLayout_3x->setObjectName(QStringLiteral("horizontalLayout_3x"));
        simplePortRadio = new QRadioButton(page_2);
        simplePortRadio->setObjectName(QStringLiteral("simplePortRadio"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(simplePortRadio->sizePolicy().hasHeightForWidth());
        simplePortRadio->setSizePolicy(sizePolicy);

        horizontalLayout_3x->addWidget(simplePortRadio);

        lineEdit_5 = new QLineEdit(page_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(false);

        horizontalLayout_3x->addWidget(lineEdit_5);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3x);

        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_14);

        horizontalLayout_5x = new QHBoxLayout();
        horizontalLayout_5x->setObjectName(QStringLiteral("horizontalLayout_5x"));
        simpleProfileRadio = new QRadioButton(page_2);
        simpleProfileRadio->setObjectName(QStringLiteral("simpleProfileRadio"));
        sizePolicy.setHeightForWidth(simpleProfileRadio->sizePolicy().hasHeightForWidth());
        simpleProfileRadio->setSizePolicy(sizePolicy);
        simpleProfileRadio->setChecked(true);

        horizontalLayout_5x->addWidget(simpleProfileRadio);

        simpleProfile = new UFW::ComboBox(page_2);
        simpleProfile->setObjectName(QStringLiteral("simpleProfile"));
        simpleProfile->setEnabled(true);
        simpleProfile->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_5x->addWidget(simpleProfile);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_5x);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        formLayout_2 = new QFormLayout(page_3);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        advancedPolicy = new QComboBox(page_3);
        advancedPolicy->setObjectName(QStringLiteral("advancedPolicy"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, advancedPolicy);

        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        advancedDirection = new QComboBox(page_3);
        advancedDirection->setObjectName(QStringLiteral("advancedDirection"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, advancedDirection);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_3x = new QGroupBox(page_3);
        groupBox_3x->setObjectName(QStringLiteral("groupBox_3x"));
        formLayout_4x = new QFormLayout(groupBox_3x);
        formLayout_4x->setObjectName(QStringLiteral("formLayout_4x"));
        formLayout_4x->setContentsMargins(-1, 5, -1, -1);
        label_5x = new QLabel(groupBox_3x);
        label_5x->setObjectName(QStringLiteral("label_5x"));

        formLayout_4x->setWidget(0, QFormLayout::LabelRole, label_5x);

        advancedSrcAnyHostRadio = new QRadioButton(groupBox_3x);
        advancedSrcAnyHostRadio->setObjectName(QStringLiteral("advancedSrcAnyHostRadio"));
        advancedSrcAnyHostRadio->setChecked(true);
        advancedSrcAnyHostRadio->setAutoExclusive(false);

        formLayout_4x->setWidget(0, QFormLayout::FieldRole, advancedSrcAnyHostRadio);

        horizontalLayout_6xa = new QHBoxLayout();
        horizontalLayout_6xa->setObjectName(QStringLiteral("horizontalLayout_6xa"));
        advancedSrcHostRadio = new QRadioButton(groupBox_3x);
        advancedSrcHostRadio->setObjectName(QStringLiteral("advancedSrcHostRadio"));
        advancedSrcHostRadio->setAutoExclusive(false);

        horizontalLayout_6xa->addWidget(advancedSrcHostRadio);

        lineEdit = new QLineEdit(groupBox_3x);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout_6xa->addWidget(lineEdit);


        formLayout_4x->setLayout(1, QFormLayout::FieldRole, horizontalLayout_6xa);

        advancedSrcAnyPortRadio = new QRadioButton(groupBox_3x);
        advancedSrcAnyPortRadio->setObjectName(QStringLiteral("advancedSrcAnyPortRadio"));
        advancedSrcAnyPortRadio->setChecked(true);
        advancedSrcAnyPortRadio->setAutoExclusive(false);

        formLayout_4x->setWidget(2, QFormLayout::FieldRole, advancedSrcAnyPortRadio);

        label_8x = new QLabel(groupBox_3x);
        label_8x->setObjectName(QStringLiteral("label_8x"));

        formLayout_4x->setWidget(2, QFormLayout::LabelRole, label_8x);

        horizontalLayout_4x = new QHBoxLayout();
        horizontalLayout_4x->setObjectName(QStringLiteral("horizontalLayout_4x"));
        advancedSrcPortRadio = new QRadioButton(groupBox_3x);
        advancedSrcPortRadio->setObjectName(QStringLiteral("advancedSrcPortRadio"));
        advancedSrcPortRadio->setAutoExclusive(false);

        horizontalLayout_4x->addWidget(advancedSrcPortRadio);

        lineEdit_2 = new QLineEdit(groupBox_3x);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);

        horizontalLayout_4x->addWidget(lineEdit_2);


        formLayout_4x->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4x);

        horizontalLayout_6x = new QHBoxLayout();
        horizontalLayout_6x->setObjectName(QStringLiteral("horizontalLayout_6x"));
        advancedSrcProfileRadio = new QRadioButton(groupBox_3x);
        advancedSrcProfileRadio->setObjectName(QStringLiteral("advancedSrcProfileRadio"));
        advancedSrcProfileRadio->setAutoExclusive(false);

        horizontalLayout_6x->addWidget(advancedSrcProfileRadio);

        advancedSrcProfile = new UFW::ComboBox(groupBox_3x);
        advancedSrcProfile->setObjectName(QStringLiteral("advancedSrcProfile"));
        advancedSrcProfile->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(advancedSrcProfile->sizePolicy().hasHeightForWidth());
        advancedSrcProfile->setSizePolicy(sizePolicy1);
        advancedSrcProfile->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6x->addWidget(advancedSrcProfile);


        formLayout_4x->setLayout(4, QFormLayout::FieldRole, horizontalLayout_6x);


        horizontalLayout->addWidget(groupBox_3x);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        formLayout_4 = new QFormLayout(groupBox_3);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setContentsMargins(-1, 5, -1, -1);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_5);

        advancedDestAnyHostRadio = new QRadioButton(groupBox_3);
        advancedDestAnyHostRadio->setObjectName(QStringLiteral("advancedDestAnyHostRadio"));
        advancedDestAnyHostRadio->setChecked(true);
        advancedDestAnyHostRadio->setAutoExclusive(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, advancedDestAnyHostRadio);

        horizontalLayout_6xb = new QHBoxLayout();
        horizontalLayout_6xb->setObjectName(QStringLiteral("horizontalLayout_6xb"));
        advancedDestHostRadio = new QRadioButton(groupBox_3);
        advancedDestHostRadio->setObjectName(QStringLiteral("advancedDestHostRadio"));
        advancedDestHostRadio->setAutoExclusive(false);

        horizontalLayout_6xb->addWidget(advancedDestHostRadio);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);

        horizontalLayout_6xb->addWidget(lineEdit_3);


        formLayout_4->setLayout(1, QFormLayout::FieldRole, horizontalLayout_6xb);

        advancedDestAnyPortRadio = new QRadioButton(groupBox_3);
        advancedDestAnyPortRadio->setObjectName(QStringLiteral("advancedDestAnyPortRadio"));
        advancedDestAnyPortRadio->setChecked(true);
        advancedDestAnyPortRadio->setAutoExclusive(false);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, advancedDestAnyPortRadio);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        advancedDestPortRadio = new QRadioButton(groupBox_3);
        advancedDestPortRadio->setObjectName(QStringLiteral("advancedDestPortRadio"));
        advancedDestPortRadio->setAutoExclusive(false);

        horizontalLayout_4->addWidget(advancedDestPortRadio);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);

        horizontalLayout_4->addWidget(lineEdit_4);


        formLayout_4->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        advancedDestProfileRadio = new QRadioButton(groupBox_3);
        advancedDestProfileRadio->setObjectName(QStringLiteral("advancedDestProfileRadio"));
        advancedDestProfileRadio->setAutoExclusive(false);

        horizontalLayout_6->addWidget(advancedDestProfileRadio);

        advancedDestProfile = new UFW::ComboBox(groupBox_3);
        advancedDestProfile->setObjectName(QStringLiteral("advancedDestProfile"));
        advancedDestProfile->setEnabled(false);
        sizePolicy1.setHeightForWidth(advancedDestProfile->sizePolicy().hasHeightForWidth());
        advancedDestProfile->setSizePolicy(sizePolicy1);
        advancedDestProfile->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6->addWidget(advancedDestProfile);


        formLayout_4->setLayout(4, QFormLayout::FieldRole, horizontalLayout_6);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_8);


        horizontalLayout->addWidget(groupBox_3);


        formLayout_2->setLayout(2, QFormLayout::SpanningRole, horizontalLayout);

        label_15 = new QLabel(page_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_15);

        advancedProtocol = new QComboBox(page_3);
        advancedProtocol->setObjectName(QStringLiteral("advancedProtocol"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, advancedProtocol);

        label_15x = new QLabel(page_3);
        label_15x->setObjectName(QStringLiteral("label_15x"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_15x);

        advancedInterface = new QComboBox(page_3);
        advancedInterface->setObjectName(QStringLiteral("advancedInterface"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, advancedInterface);

        advancedLoggingLabel = new QLabel(page_3);
        advancedLoggingLabel->setObjectName(QStringLiteral("advancedLoggingLabel"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, advancedLoggingLabel);

        advancedLogging = new QComboBox(page_3);
        advancedLogging->setObjectName(QStringLiteral("advancedLogging"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, advancedLogging);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);

        verticalSpacer = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        statusLabel = new KSqueezedTextLabel(RuleWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QFont font;
        font.setItalic(true);
        statusLabel->setFont(font);

        verticalLayout_2->addWidget(statusLabel);

        QWidget::setTabOrder(ruleType, simplePolicy);
        QWidget::setTabOrder(simplePolicy, simpleDirection);
        QWidget::setTabOrder(simpleDirection, simplePortRadio);
        QWidget::setTabOrder(simplePortRadio, simpleProfileRadio);
        QWidget::setTabOrder(simpleProfileRadio, simpleProfile);
        QWidget::setTabOrder(simpleProfile, simpleProtocol);
        QWidget::setTabOrder(simpleProtocol, simpleLogging);
        QWidget::setTabOrder(simpleLogging, advancedPolicy);
        QWidget::setTabOrder(advancedPolicy, advancedDirection);
        QWidget::setTabOrder(advancedDirection, advancedSrcAnyHostRadio);
        QWidget::setTabOrder(advancedSrcAnyHostRadio, advancedSrcHostRadio);
        QWidget::setTabOrder(advancedSrcHostRadio, advancedSrcAnyPortRadio);
        QWidget::setTabOrder(advancedSrcAnyPortRadio, advancedSrcPortRadio);
        QWidget::setTabOrder(advancedSrcPortRadio, advancedSrcProfileRadio);
        QWidget::setTabOrder(advancedSrcProfileRadio, advancedSrcProfile);
        QWidget::setTabOrder(advancedSrcProfile, advancedDestAnyHostRadio);
        QWidget::setTabOrder(advancedDestAnyHostRadio, advancedDestHostRadio);
        QWidget::setTabOrder(advancedDestHostRadio, advancedDestAnyPortRadio);
        QWidget::setTabOrder(advancedDestAnyPortRadio, advancedDestPortRadio);
        QWidget::setTabOrder(advancedDestPortRadio, advancedDestProfileRadio);
        QWidget::setTabOrder(advancedDestProfileRadio, advancedDestProfile);
        QWidget::setTabOrder(advancedDestProfile, advancedProtocol);
        QWidget::setTabOrder(advancedProtocol, advancedInterface);
        QWidget::setTabOrder(advancedInterface, advancedLogging);

        retranslateUi(RuleWidget);
        QObject::connect(simpleProfileRadio, SIGNAL(toggled(bool)), simpleProfile, SLOT(setEnabled(bool)));
        QObject::connect(advancedSrcProfileRadio, SIGNAL(toggled(bool)), advancedSrcProfile, SLOT(setEnabled(bool)));
        QObject::connect(advancedDestProfileRadio, SIGNAL(toggled(bool)), advancedDestProfile, SLOT(setEnabled(bool)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RuleWidget);
    } // setupUi

    void retranslateUi(QWidget *RuleWidget)
    {
        label_9->setText(tr2i18n("Policy:", 0));
        label_7->setText(tr2i18n("Direction:", 0));
        simpleLoggingLabel->setText(tr2i18n("Logging:", 0));
        label_13->setText(tr2i18n("Protocol:", 0));
        simplePortRadio->setText(QString());
        label_14->setText(tr2i18n("Port:", 0));
        simpleProfileRadio->setText(QString());
        label_12->setText(tr2i18n("Policy:", 0));
        label_10->setText(tr2i18n("Direction:", 0));
        groupBox_3x->setTitle(tr2i18n("Source", 0));
        label_5x->setText(tr2i18n("Address:", 0));
        advancedSrcAnyHostRadio->setText(tr2i18n("Any address", 0));
        advancedSrcHostRadio->setText(QString());
        advancedSrcAnyPortRadio->setText(tr2i18n("Any port", 0));
        label_8x->setText(tr2i18n("Port:", 0));
        advancedSrcPortRadio->setText(QString());
        advancedSrcProfileRadio->setText(QString());
        groupBox_3->setTitle(tr2i18n("Destination", 0));
        label_5->setText(tr2i18n("Address:", 0));
        advancedDestAnyHostRadio->setText(tr2i18n("Any address", 0));
        advancedDestHostRadio->setText(QString());
        advancedDestAnyPortRadio->setText(tr2i18n("Any port", 0));
        advancedDestPortRadio->setText(QString());
        advancedDestProfileRadio->setText(QString());
        label_8->setText(tr2i18n("Port:", 0));
        label_15->setText(tr2i18n("Protocol:", 0));
        label_15x->setText(tr2i18n("Interface:", 0));
        advancedLoggingLabel->setText(tr2i18n("Logging:", 0));
        Q_UNUSED(RuleWidget);
    } // retranslateUi

};

namespace Ui {
    class RuleWidget: public Ui_RuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RULEWIDGET_H

