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


#include "OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties() {
    this->init();
}

OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::~OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties() {
    
}

void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::init() {
    m_mailer_email_embed_isSet = false;
    m_mailer_email_charset_isSet = false;
    m_mailer_email_retriever_user_id_isSet = false;
    m_mailer_email_retriever_user_pwd_isSet = false;
}

void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(mailer_email_embed, json[QString("mailer.email.embed")]);
    
    ::OpenAPI::fromJsonValue(mailer_email_charset, json[QString("mailer.email.charset")]);
    
    ::OpenAPI::fromJsonValue(mailer_email_retriever_user_id, json[QString("mailer.email.retrieverUserID")]);
    
    ::OpenAPI::fromJsonValue(mailer_email_retriever_user_pwd, json[QString("mailer.email.retrieverUserPWD")]);
    
}

QString
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(mailer_email_embed.isSet()){
        obj.insert(QString("mailer.email.embed"), ::OpenAPI::toJsonValue(mailer_email_embed));
    }
	if(mailer_email_charset.isSet()){
        obj.insert(QString("mailer.email.charset"), ::OpenAPI::toJsonValue(mailer_email_charset));
    }
	if(mailer_email_retriever_user_id.isSet()){
        obj.insert(QString("mailer.email.retrieverUserID"), ::OpenAPI::toJsonValue(mailer_email_retriever_user_id));
    }
	if(mailer_email_retriever_user_pwd.isSet()){
        obj.insert(QString("mailer.email.retrieverUserPWD"), ::OpenAPI::toJsonValue(mailer_email_retriever_user_pwd));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailEmbed() const {
    return mailer_email_embed;
}
void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailEmbed(const OAIConfigNodePropertyBoolean &mailer_email_embed) {
    this->mailer_email_embed = mailer_email_embed;
    this->m_mailer_email_embed_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailCharset() const {
    return mailer_email_charset;
}
void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailCharset(const OAIConfigNodePropertyString &mailer_email_charset) {
    this->mailer_email_charset = mailer_email_charset;
    this->m_mailer_email_charset_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailRetrieverUserId() const {
    return mailer_email_retriever_user_id;
}
void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailRetrieverUserId(const OAIConfigNodePropertyString &mailer_email_retriever_user_id) {
    this->mailer_email_retriever_user_id = mailer_email_retriever_user_id;
    this->m_mailer_email_retriever_user_id_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailRetrieverUserPwd() const {
    return mailer_email_retriever_user_pwd;
}
void
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailRetrieverUserPwd(const OAIConfigNodePropertyString &mailer_email_retriever_user_pwd) {
    this->mailer_email_retriever_user_pwd = mailer_email_retriever_user_pwd;
    this->m_mailer_email_retriever_user_pwd_isSet = true;
}


bool
OAIComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(mailer_email_embed.isSet()){ isObjectUpdated = true; break;}
    
        if(mailer_email_charset.isSet()){ isObjectUpdated = true; break;}
    
        if(mailer_email_retriever_user_id.isSet()){ isObjectUpdated = true; break;}
    
        if(mailer_email_retriever_user_pwd.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
