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
 * OAIComDayCqDamInddImplServletSnippetCreationServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamInddImplServletSnippetCreationServletProperties_H
#define OAIComDayCqDamInddImplServletSnippetCreationServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamInddImplServletSnippetCreationServletProperties: public OAIObject {
public:
    OAIComDayCqDamInddImplServletSnippetCreationServletProperties();
    OAIComDayCqDamInddImplServletSnippetCreationServletProperties(QString json);
    ~OAIComDayCqDamInddImplServletSnippetCreationServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getSnippetcreationMaxcollections() const;
    void setSnippetcreationMaxcollections(const OAIConfigNodePropertyInteger &snippetcreation_maxcollections);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger snippetcreation_maxcollections;
    bool m_snippetcreation_maxcollections_isSet;

};

}

#endif // OAIComDayCqDamInddImplServletSnippetCreationServletProperties_H
