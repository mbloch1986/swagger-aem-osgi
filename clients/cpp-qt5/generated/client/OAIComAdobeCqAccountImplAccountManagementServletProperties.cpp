/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIComAdobeCqAccountImplAccountManagementServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqAccountImplAccountManagementServletProperties::OAIComAdobeCqAccountImplAccountManagementServletProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqAccountImplAccountManagementServletProperties::OAIComAdobeCqAccountImplAccountManagementServletProperties() {
    init();
}

OAIComAdobeCqAccountImplAccountManagementServletProperties::~OAIComAdobeCqAccountImplAccountManagementServletProperties() {
    this->cleanup();
}

void
OAIComAdobeCqAccountImplAccountManagementServletProperties::init() {
    cq_accountmanager_config_informnewaccount_mail = new OAIConfigNodePropertyString();
    m_cq_accountmanager_config_informnewaccount_mail_isSet = false;
    cq_accountmanager_config_informnewpwd_mail = new OAIConfigNodePropertyString();
    m_cq_accountmanager_config_informnewpwd_mail_isSet = false;
}

void
OAIComAdobeCqAccountImplAccountManagementServletProperties::cleanup() {
    if(cq_accountmanager_config_informnewaccount_mail != nullptr) { 
        delete cq_accountmanager_config_informnewaccount_mail;
    }
    if(cq_accountmanager_config_informnewpwd_mail != nullptr) { 
        delete cq_accountmanager_config_informnewpwd_mail;
    }
}

OAIComAdobeCqAccountImplAccountManagementServletProperties*
OAIComAdobeCqAccountImplAccountManagementServletProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqAccountImplAccountManagementServletProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_accountmanager_config_informnewaccount_mail, pJson["cq.accountmanager.config.informnewaccount.mail"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cq_accountmanager_config_informnewpwd_mail, pJson["cq.accountmanager.config.informnewpwd.mail"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqAccountImplAccountManagementServletProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqAccountImplAccountManagementServletProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_accountmanager_config_informnewaccount_mail != nullptr) && (cq_accountmanager_config_informnewaccount_mail->isSet())){
        toJsonValue(QString("cq.accountmanager.config.informnewaccount.mail"), cq_accountmanager_config_informnewaccount_mail, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cq_accountmanager_config_informnewpwd_mail != nullptr) && (cq_accountmanager_config_informnewpwd_mail->isSet())){
        toJsonValue(QString("cq.accountmanager.config.informnewpwd.mail"), cq_accountmanager_config_informnewpwd_mail, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqAccountImplAccountManagementServletProperties::getCqAccountmanagerConfigInformnewaccountMail() {
    return cq_accountmanager_config_informnewaccount_mail;
}
void
OAIComAdobeCqAccountImplAccountManagementServletProperties::setCqAccountmanagerConfigInformnewaccountMail(OAIConfigNodePropertyString* cq_accountmanager_config_informnewaccount_mail) {
    this->cq_accountmanager_config_informnewaccount_mail = cq_accountmanager_config_informnewaccount_mail;
    this->m_cq_accountmanager_config_informnewaccount_mail_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqAccountImplAccountManagementServletProperties::getCqAccountmanagerConfigInformnewpwdMail() {
    return cq_accountmanager_config_informnewpwd_mail;
}
void
OAIComAdobeCqAccountImplAccountManagementServletProperties::setCqAccountmanagerConfigInformnewpwdMail(OAIConfigNodePropertyString* cq_accountmanager_config_informnewpwd_mail) {
    this->cq_accountmanager_config_informnewpwd_mail = cq_accountmanager_config_informnewpwd_mail;
    this->m_cq_accountmanager_config_informnewpwd_mail_isSet = true;
}


bool
OAIComAdobeCqAccountImplAccountManagementServletProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_accountmanager_config_informnewaccount_mail != nullptr && cq_accountmanager_config_informnewaccount_mail->isSet()){ isObjectUpdated = true; break;}
        if(cq_accountmanager_config_informnewpwd_mail != nullptr && cq_accountmanager_config_informnewpwd_mail->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

