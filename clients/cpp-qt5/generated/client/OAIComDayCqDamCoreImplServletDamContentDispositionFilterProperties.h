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

#ifndef OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties_H_
#define OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties();
    OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties(QString json);
    ~OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getCqMimeTypeBlacklist();
    void setCqMimeTypeBlacklist(OAIConfigNodePropertyArray* cq_mime_type_blacklist);

    OAIConfigNodePropertyBoolean* getCqDamEmptyMime();
    void setCqDamEmptyMime(OAIConfigNodePropertyBoolean* cq_dam_empty_mime);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* cq_mime_type_blacklist;
    bool m_cq_mime_type_blacklist_isSet;

    OAIConfigNodePropertyBoolean* cq_dam_empty_mime;
    bool m_cq_dam_empty_mime_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties_H_ */
