/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryProperties from './OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryProperties';

/**
 * The OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo model module.
 * @module model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo
 * @version 1.0.0
 */
class OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo {
    /**
     * Constructs a new <code>OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo</code>.
     * @alias module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo
     */
    constructor() { 
        
        OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo} The populated <code>OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo();

            if (data.hasOwnProperty('pid')) {
                obj['pid'] = ApiClient.convertToType(data['pid'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo.prototype['title'] = undefined;

/**
 * @member {String} description
 */
OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo.prototype['description'] = undefined;

/**
 * @member {module:model/OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryProperties} properties
 */
OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo.prototype['properties'] = undefined;






export default OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFactoryInfo;

