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


#include "OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties() {
    this->init();
}

OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::~OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties() {
    
}

void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::init() {
    m_sync_translation_state_scheduling_format_isSet = false;
    m_scheduling_repeat_translation_scheduling_format_isSet = false;
    m_sync_translation_state_lock_timeout_in_minutes_isSet = false;
    m_export_format_isSet = false;
}

void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(sync_translation_state_scheduling_format, json[QString("syncTranslationState.schedulingFormat")]);
    
    ::OpenAPI::fromJsonValue(scheduling_repeat_translation_scheduling_format, json[QString("schedulingRepeatTranslation.schedulingFormat")]);
    
    ::OpenAPI::fromJsonValue(sync_translation_state_lock_timeout_in_minutes, json[QString("syncTranslationState.lockTimeoutInMinutes")]);
    
    ::OpenAPI::fromJsonValue(export_format, json[QString("export.format")]);
    
}

QString
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(sync_translation_state_scheduling_format.isSet()){
        obj.insert(QString("syncTranslationState.schedulingFormat"), ::OpenAPI::toJsonValue(sync_translation_state_scheduling_format));
    }
	if(scheduling_repeat_translation_scheduling_format.isSet()){
        obj.insert(QString("schedulingRepeatTranslation.schedulingFormat"), ::OpenAPI::toJsonValue(scheduling_repeat_translation_scheduling_format));
    }
	if(sync_translation_state_lock_timeout_in_minutes.isSet()){
        obj.insert(QString("syncTranslationState.lockTimeoutInMinutes"), ::OpenAPI::toJsonValue(sync_translation_state_lock_timeout_in_minutes));
    }
	if(export_format.isSet()){
        obj.insert(QString("export.format"), ::OpenAPI::toJsonValue(export_format));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::getSyncTranslationStateSchedulingFormat() const {
    return sync_translation_state_scheduling_format;
}
void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::setSyncTranslationStateSchedulingFormat(const OAIConfigNodePropertyString &sync_translation_state_scheduling_format) {
    this->sync_translation_state_scheduling_format = sync_translation_state_scheduling_format;
    this->m_sync_translation_state_scheduling_format_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::getSchedulingRepeatTranslationSchedulingFormat() const {
    return scheduling_repeat_translation_scheduling_format;
}
void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::setSchedulingRepeatTranslationSchedulingFormat(const OAIConfigNodePropertyString &scheduling_repeat_translation_scheduling_format) {
    this->scheduling_repeat_translation_scheduling_format = scheduling_repeat_translation_scheduling_format;
    this->m_scheduling_repeat_translation_scheduling_format_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::getSyncTranslationStateLockTimeoutInMinutes() const {
    return sync_translation_state_lock_timeout_in_minutes;
}
void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::setSyncTranslationStateLockTimeoutInMinutes(const OAIConfigNodePropertyString &sync_translation_state_lock_timeout_in_minutes) {
    this->sync_translation_state_lock_timeout_in_minutes = sync_translation_state_lock_timeout_in_minutes;
    this->m_sync_translation_state_lock_timeout_in_minutes_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::getExportFormat() const {
    return export_format;
}
void
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::setExportFormat(const OAIConfigNodePropertyDropDown &export_format) {
    this->export_format = export_format;
    this->m_export_format_isSet = true;
}


bool
OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sync_translation_state_scheduling_format.isSet()){ isObjectUpdated = true; break;}
    
        if(scheduling_repeat_translation_scheduling_format.isSet()){ isObjectUpdated = true; break;}
    
        if(sync_translation_state_lock_timeout_in_minutes.isSet()){ isObjectUpdated = true; break;}
    
        if(export_format.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

