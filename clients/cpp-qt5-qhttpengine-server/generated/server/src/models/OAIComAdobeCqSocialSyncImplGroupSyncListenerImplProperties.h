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
 * OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties_H
#define OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties();
    OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties(QString json);
    ~OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getNodetypes() const;
    void setNodetypes(const OAIConfigNodePropertyArray &nodetypes);

    OAIConfigNodePropertyArray getIgnorableprops() const;
    void setIgnorableprops(const OAIConfigNodePropertyArray &ignorableprops);

    OAIConfigNodePropertyString getIgnorablenodes() const;
    void setIgnorablenodes(const OAIConfigNodePropertyString &ignorablenodes);

    OAIConfigNodePropertyBoolean getEnabled() const;
    void setEnabled(const OAIConfigNodePropertyBoolean &enabled);

    OAIConfigNodePropertyString getDistfolders() const;
    void setDistfolders(const OAIConfigNodePropertyString &distfolders);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray nodetypes;
    bool m_nodetypes_isSet;

    OAIConfigNodePropertyArray ignorableprops;
    bool m_ignorableprops_isSet;

    OAIConfigNodePropertyString ignorablenodes;
    bool m_ignorablenodes_isSet;

    OAIConfigNodePropertyBoolean enabled;
    bool m_enabled_isSet;

    OAIConfigNodePropertyString distfolders;
    bool m_distfolders_isSet;

};

}

#endif // OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties_H