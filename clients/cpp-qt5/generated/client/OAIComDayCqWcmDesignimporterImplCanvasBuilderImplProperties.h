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
 * OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties_H_
#define OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties: public OAIObject {
public:
    OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties();
    OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties(QString json);
    ~OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getFilepattern();
    void setFilepattern(OAIConfigNodePropertyString* filepattern);

    OAIConfigNodePropertyBoolean* getBuildPageNodes();
    void setBuildPageNodes(OAIConfigNodePropertyBoolean* build_page_nodes);

    OAIConfigNodePropertyBoolean* getBuildClientLibs();
    void setBuildClientLibs(OAIConfigNodePropertyBoolean* build_client_libs);

    OAIConfigNodePropertyBoolean* getBuildCanvasComponent();
    void setBuildCanvasComponent(OAIConfigNodePropertyBoolean* build_canvas_component);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* filepattern;
    bool m_filepattern_isSet;

    OAIConfigNodePropertyBoolean* build_page_nodes;
    bool m_build_page_nodes_isSet;

    OAIConfigNodePropertyBoolean* build_client_libs;
    bool m_build_client_libs_isSet;

    OAIConfigNodePropertyBoolean* build_canvas_component;
    bool m_build_canvas_component_isSet;

};

}

#endif /* OAIComDayCqWcmDesignimporterImplCanvasBuilderImplProperties_H_ */
