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
import ConfigNodePropertyArray from './ConfigNodePropertyArray';

/**
 * The OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties model module.
 * @module model/OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties
 * @version 1.0.0
 */
class OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties {
    /**
     * Constructs a new <code>OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties</code>.
     * @alias module:model/OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties
     */
    constructor() { 
        
        OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties} obj Optional instance to populate.
     * @return {module:model/OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties} The populated <code>OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties();

            if (data.hasOwnProperty('org.apache.sling.scripting.sightly.js.bindings')) {
                obj['org.apache.sling.scripting.sightly.js.bindings'] = ConfigNodePropertyArray.constructFromObject(data['org.apache.sling.scripting.sightly.js.bindings']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyArray} org.apache.sling.scripting.sightly.js.bindings
 */
OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties.prototype['org.apache.sling.scripting.sightly.js.bindings'] = undefined;






export default OrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProviderProperties;

