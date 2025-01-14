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
 * OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo_H_
#define OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo: public OAIObject {
public:
    OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo();
    OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo(QString json);
    ~OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties* getProperties();
    void setProperties(OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamCoreProcessExifToolExtractMetadataProcessInfo_H_ */
