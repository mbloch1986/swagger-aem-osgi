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

/*
 * OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties_H
#define OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyDropDown.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties: public OAIObject {
public:
    OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties();
    OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties(QString json);
    ~OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getSyncTranslationStateSchedulingFormat() const;
    void setSyncTranslationStateSchedulingFormat(const OAIConfigNodePropertyString &sync_translation_state_scheduling_format);

    OAIConfigNodePropertyString getSchedulingRepeatTranslationSchedulingFormat() const;
    void setSchedulingRepeatTranslationSchedulingFormat(const OAIConfigNodePropertyString &scheduling_repeat_translation_scheduling_format);

    OAIConfigNodePropertyString getSyncTranslationStateLockTimeoutInMinutes() const;
    void setSyncTranslationStateLockTimeoutInMinutes(const OAIConfigNodePropertyString &sync_translation_state_lock_timeout_in_minutes);

    OAIConfigNodePropertyDropDown getExportFormat() const;
    void setExportFormat(const OAIConfigNodePropertyDropDown &export_format);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString sync_translation_state_scheduling_format;
    bool m_sync_translation_state_scheduling_format_isSet;

    OAIConfigNodePropertyString scheduling_repeat_translation_scheduling_format;
    bool m_scheduling_repeat_translation_scheduling_format_isSet;

    OAIConfigNodePropertyString sync_translation_state_lock_timeout_in_minutes;
    bool m_sync_translation_state_lock_timeout_in_minutes_isSet;

    OAIConfigNodePropertyDropDown export_format;
    bool m_export_format_isSet;

};

}

#endif // OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties_H
