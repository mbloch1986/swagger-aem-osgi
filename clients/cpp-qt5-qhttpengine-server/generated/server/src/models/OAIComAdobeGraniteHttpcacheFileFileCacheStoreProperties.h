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
 * OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties_H
#define OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties: public OAIObject {
public:
    OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties();
    OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties(QString json);
    ~OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getComAdobeGraniteHttpcacheFileDocumentRoot() const;
    void setComAdobeGraniteHttpcacheFileDocumentRoot(const OAIConfigNodePropertyString &com_adobe_granite_httpcache_file_document_root);

    OAIConfigNodePropertyString getComAdobeGraniteHttpcacheFileIncludeHost() const;
    void setComAdobeGraniteHttpcacheFileIncludeHost(const OAIConfigNodePropertyString &com_adobe_granite_httpcache_file_include_host);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString com_adobe_granite_httpcache_file_document_root;
    bool m_com_adobe_granite_httpcache_file_document_root_isSet;

    OAIConfigNodePropertyString com_adobe_granite_httpcache_file_include_host;
    bool m_com_adobe_granite_httpcache_file_include_host_isSet;

};

}

#endif // OAIComAdobeGraniteHttpcacheFileFileCacheStoreProperties_H
