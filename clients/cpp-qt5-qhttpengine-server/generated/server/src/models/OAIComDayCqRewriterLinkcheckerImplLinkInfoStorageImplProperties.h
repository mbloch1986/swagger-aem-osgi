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
 * OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties_H
#define OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties: public OAIObject {
public:
    OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties();
    OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties(QString json);
    ~OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getServiceMaxLinksPerHost() const;
    void setServiceMaxLinksPerHost(const OAIConfigNodePropertyInteger &service_max_links_per_host);

    OAIConfigNodePropertyBoolean getServiceSaveExternalLinkReferences() const;
    void setServiceSaveExternalLinkReferences(const OAIConfigNodePropertyBoolean &service_save_external_link_references);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger service_max_links_per_host;
    bool m_service_max_links_per_host_isSet;

    OAIConfigNodePropertyBoolean service_save_external_link_references;
    bool m_service_save_external_link_references_isSet;

};

}

#endif // OAIComDayCqRewriterLinkcheckerImplLinkInfoStorageImplProperties_H
