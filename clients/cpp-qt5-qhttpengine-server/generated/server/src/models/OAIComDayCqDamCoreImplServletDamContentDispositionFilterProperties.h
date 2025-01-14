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
 * OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties_H
#define OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties();
    OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties(QString json);
    ~OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getCqMimeTypeBlacklist() const;
    void setCqMimeTypeBlacklist(const OAIConfigNodePropertyArray &cq_mime_type_blacklist);

    OAIConfigNodePropertyBoolean getCqDamEmptyMime() const;
    void setCqDamEmptyMime(const OAIConfigNodePropertyBoolean &cq_dam_empty_mime);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray cq_mime_type_blacklist;
    bool m_cq_mime_type_blacklist_isSet;

    OAIConfigNodePropertyBoolean cq_dam_empty_mime;
    bool m_cq_dam_empty_mime_isSet;

};

}

#endif // OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties_H
