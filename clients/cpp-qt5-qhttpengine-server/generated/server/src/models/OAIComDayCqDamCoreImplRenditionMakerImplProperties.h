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
 * OAIComDayCqDamCoreImplRenditionMakerImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplRenditionMakerImplProperties_H
#define OAIComDayCqDamCoreImplRenditionMakerImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplRenditionMakerImplProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplRenditionMakerImplProperties();
    OAIComDayCqDamCoreImplRenditionMakerImplProperties(QString json);
    ~OAIComDayCqDamCoreImplRenditionMakerImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getXmpPropagate() const;
    void setXmpPropagate(const OAIConfigNodePropertyBoolean &xmp_propagate);

    OAIConfigNodePropertyArray getXmpExcludes() const;
    void setXmpExcludes(const OAIConfigNodePropertyArray &xmp_excludes);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean xmp_propagate;
    bool m_xmp_propagate_isSet;

    OAIConfigNodePropertyArray xmp_excludes;
    bool m_xmp_excludes_isSet;

};

}

#endif // OAIComDayCqDamCoreImplRenditionMakerImplProperties_H
