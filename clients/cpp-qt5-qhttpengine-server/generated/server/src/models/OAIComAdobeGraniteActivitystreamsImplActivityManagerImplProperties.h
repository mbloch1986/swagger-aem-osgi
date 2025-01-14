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
 * OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties_H
#define OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties: public OAIObject {
public:
    OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties();
    OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties(QString json);
    ~OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getAggregateRelationships() const;
    void setAggregateRelationships(const OAIConfigNodePropertyArray &aggregate_relationships);

    OAIConfigNodePropertyBoolean getAggregateDescendVirtual() const;
    void setAggregateDescendVirtual(const OAIConfigNodePropertyBoolean &aggregate_descend_virtual);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray aggregate_relationships;
    bool m_aggregate_relationships_isSet;

    OAIConfigNodePropertyBoolean aggregate_descend_virtual;
    bool m_aggregate_descend_virtual_isSet;

};

}

#endif // OAIComAdobeGraniteActivitystreamsImplActivityManagerImplProperties_H
