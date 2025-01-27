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
 * OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties_H
#define OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties: public OAIObject {
public:
    OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties();
    OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties(QString json);
    ~OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getScreensChannelsPropertiesToRemove() const;
    void setScreensChannelsPropertiesToRemove(const OAIConfigNodePropertyArray &screens_channels_properties_to_remove);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray screens_channels_properties_to_remove;
    bool m_screens_channels_properties_to_remove_isSet;

};

}

#endif // OAIComAdobeCqScreensImplScreensChannelPostProcessorProperties_H
