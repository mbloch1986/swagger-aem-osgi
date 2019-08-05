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


#include "OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties() {
    init();
}

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::~OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::init() {
    jasper_compiler_target_vm = new OAIConfigNodePropertyString();
    m_jasper_compiler_target_vm_isSet = false;
    jasper_compiler_source_vm = new OAIConfigNodePropertyString();
    m_jasper_compiler_source_vm_isSet = false;
    jasper_classdebuginfo = new OAIConfigNodePropertyBoolean();
    m_jasper_classdebuginfo_isSet = false;
    jasper_enable_pooling = new OAIConfigNodePropertyBoolean();
    m_jasper_enable_pooling_isSet = false;
    jasper_ie_class_id = new OAIConfigNodePropertyString();
    m_jasper_ie_class_id_isSet = false;
    jasper_gen_string_as_char_array = new OAIConfigNodePropertyBoolean();
    m_jasper_gen_string_as_char_array_isSet = false;
    jasper_keepgenerated = new OAIConfigNodePropertyBoolean();
    m_jasper_keepgenerated_isSet = false;
    jasper_mappedfile = new OAIConfigNodePropertyBoolean();
    m_jasper_mappedfile_isSet = false;
    jasper_trim_spaces = new OAIConfigNodePropertyBoolean();
    m_jasper_trim_spaces_isSet = false;
    jasper_display_source_fragments = new OAIConfigNodePropertyBoolean();
    m_jasper_display_source_fragments_isSet = false;
    default_is_session = new OAIConfigNodePropertyBoolean();
    m_default_is_session_isSet = false;
}

void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::cleanup() {
    if(jasper_compiler_target_vm != nullptr) { 
        delete jasper_compiler_target_vm;
    }
    if(jasper_compiler_source_vm != nullptr) { 
        delete jasper_compiler_source_vm;
    }
    if(jasper_classdebuginfo != nullptr) { 
        delete jasper_classdebuginfo;
    }
    if(jasper_enable_pooling != nullptr) { 
        delete jasper_enable_pooling;
    }
    if(jasper_ie_class_id != nullptr) { 
        delete jasper_ie_class_id;
    }
    if(jasper_gen_string_as_char_array != nullptr) { 
        delete jasper_gen_string_as_char_array;
    }
    if(jasper_keepgenerated != nullptr) { 
        delete jasper_keepgenerated;
    }
    if(jasper_mappedfile != nullptr) { 
        delete jasper_mappedfile;
    }
    if(jasper_trim_spaces != nullptr) { 
        delete jasper_trim_spaces;
    }
    if(jasper_display_source_fragments != nullptr) { 
        delete jasper_display_source_fragments;
    }
    if(default_is_session != nullptr) { 
        delete default_is_session;
    }
}

OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&jasper_compiler_target_vm, pJson["jasper.compilerTargetVM"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jasper_compiler_source_vm, pJson["jasper.compilerSourceVM"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jasper_classdebuginfo, pJson["jasper.classdebuginfo"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&jasper_enable_pooling, pJson["jasper.enablePooling"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&jasper_ie_class_id, pJson["jasper.ieClassId"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jasper_gen_string_as_char_array, pJson["jasper.genStringAsCharArray"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&jasper_keepgenerated, pJson["jasper.keepgenerated"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&jasper_mappedfile, pJson["jasper.mappedfile"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&jasper_trim_spaces, pJson["jasper.trimSpaces"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&jasper_display_source_fragments, pJson["jasper.displaySourceFragments"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&default_is_session, pJson["default.is.session"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((jasper_compiler_target_vm != nullptr) && (jasper_compiler_target_vm->isSet())){
        toJsonValue(QString("jasper.compilerTargetVM"), jasper_compiler_target_vm, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jasper_compiler_source_vm != nullptr) && (jasper_compiler_source_vm->isSet())){
        toJsonValue(QString("jasper.compilerSourceVM"), jasper_compiler_source_vm, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jasper_classdebuginfo != nullptr) && (jasper_classdebuginfo->isSet())){
        toJsonValue(QString("jasper.classdebuginfo"), jasper_classdebuginfo, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((jasper_enable_pooling != nullptr) && (jasper_enable_pooling->isSet())){
        toJsonValue(QString("jasper.enablePooling"), jasper_enable_pooling, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((jasper_ie_class_id != nullptr) && (jasper_ie_class_id->isSet())){
        toJsonValue(QString("jasper.ieClassId"), jasper_ie_class_id, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jasper_gen_string_as_char_array != nullptr) && (jasper_gen_string_as_char_array->isSet())){
        toJsonValue(QString("jasper.genStringAsCharArray"), jasper_gen_string_as_char_array, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((jasper_keepgenerated != nullptr) && (jasper_keepgenerated->isSet())){
        toJsonValue(QString("jasper.keepgenerated"), jasper_keepgenerated, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((jasper_mappedfile != nullptr) && (jasper_mappedfile->isSet())){
        toJsonValue(QString("jasper.mappedfile"), jasper_mappedfile, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((jasper_trim_spaces != nullptr) && (jasper_trim_spaces->isSet())){
        toJsonValue(QString("jasper.trimSpaces"), jasper_trim_spaces, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((jasper_display_source_fragments != nullptr) && (jasper_display_source_fragments->isSet())){
        toJsonValue(QString("jasper.displaySourceFragments"), jasper_display_source_fragments, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((default_is_session != nullptr) && (default_is_session->isSet())){
        toJsonValue(QString("default.is.session"), default_is_session, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperCompilerTargetVm() {
    return jasper_compiler_target_vm;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperCompilerTargetVm(OAIConfigNodePropertyString* jasper_compiler_target_vm) {
    this->jasper_compiler_target_vm = jasper_compiler_target_vm;
    this->m_jasper_compiler_target_vm_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperCompilerSourceVm() {
    return jasper_compiler_source_vm;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperCompilerSourceVm(OAIConfigNodePropertyString* jasper_compiler_source_vm) {
    this->jasper_compiler_source_vm = jasper_compiler_source_vm;
    this->m_jasper_compiler_source_vm_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperClassdebuginfo() {
    return jasper_classdebuginfo;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperClassdebuginfo(OAIConfigNodePropertyBoolean* jasper_classdebuginfo) {
    this->jasper_classdebuginfo = jasper_classdebuginfo;
    this->m_jasper_classdebuginfo_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperEnablePooling() {
    return jasper_enable_pooling;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperEnablePooling(OAIConfigNodePropertyBoolean* jasper_enable_pooling) {
    this->jasper_enable_pooling = jasper_enable_pooling;
    this->m_jasper_enable_pooling_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperIeClassId() {
    return jasper_ie_class_id;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperIeClassId(OAIConfigNodePropertyString* jasper_ie_class_id) {
    this->jasper_ie_class_id = jasper_ie_class_id;
    this->m_jasper_ie_class_id_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperGenStringAsCharArray() {
    return jasper_gen_string_as_char_array;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperGenStringAsCharArray(OAIConfigNodePropertyBoolean* jasper_gen_string_as_char_array) {
    this->jasper_gen_string_as_char_array = jasper_gen_string_as_char_array;
    this->m_jasper_gen_string_as_char_array_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperKeepgenerated() {
    return jasper_keepgenerated;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperKeepgenerated(OAIConfigNodePropertyBoolean* jasper_keepgenerated) {
    this->jasper_keepgenerated = jasper_keepgenerated;
    this->m_jasper_keepgenerated_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperMappedfile() {
    return jasper_mappedfile;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperMappedfile(OAIConfigNodePropertyBoolean* jasper_mappedfile) {
    this->jasper_mappedfile = jasper_mappedfile;
    this->m_jasper_mappedfile_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperTrimSpaces() {
    return jasper_trim_spaces;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperTrimSpaces(OAIConfigNodePropertyBoolean* jasper_trim_spaces) {
    this->jasper_trim_spaces = jasper_trim_spaces;
    this->m_jasper_trim_spaces_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperDisplaySourceFragments() {
    return jasper_display_source_fragments;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperDisplaySourceFragments(OAIConfigNodePropertyBoolean* jasper_display_source_fragments) {
    this->jasper_display_source_fragments = jasper_display_source_fragments;
    this->m_jasper_display_source_fragments_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getDefaultIsSession() {
    return default_is_session;
}
void
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setDefaultIsSession(OAIConfigNodePropertyBoolean* default_is_session) {
    this->default_is_session = default_is_session;
    this->m_default_is_session_isSet = true;
}


bool
OAIOrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(jasper_compiler_target_vm != nullptr && jasper_compiler_target_vm->isSet()){ isObjectUpdated = true; break;}
        if(jasper_compiler_source_vm != nullptr && jasper_compiler_source_vm->isSet()){ isObjectUpdated = true; break;}
        if(jasper_classdebuginfo != nullptr && jasper_classdebuginfo->isSet()){ isObjectUpdated = true; break;}
        if(jasper_enable_pooling != nullptr && jasper_enable_pooling->isSet()){ isObjectUpdated = true; break;}
        if(jasper_ie_class_id != nullptr && jasper_ie_class_id->isSet()){ isObjectUpdated = true; break;}
        if(jasper_gen_string_as_char_array != nullptr && jasper_gen_string_as_char_array->isSet()){ isObjectUpdated = true; break;}
        if(jasper_keepgenerated != nullptr && jasper_keepgenerated->isSet()){ isObjectUpdated = true; break;}
        if(jasper_mappedfile != nullptr && jasper_mappedfile->isSet()){ isObjectUpdated = true; break;}
        if(jasper_trim_spaces != nullptr && jasper_trim_spaces->isSet()){ isObjectUpdated = true; break;}
        if(jasper_display_source_fragments != nullptr && jasper_display_source_fragments->isSet()){ isObjectUpdated = true; break;}
        if(default_is_session != nullptr && default_is_session->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
