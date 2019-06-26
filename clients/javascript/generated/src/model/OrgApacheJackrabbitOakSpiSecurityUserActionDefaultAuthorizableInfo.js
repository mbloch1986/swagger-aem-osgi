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
import OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties from './OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties';

/**
 * The OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo model module.
 * @module model/OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo
 * @version 1.0.0
 */
class OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo {
    /**
     * Constructs a new <code>OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo</code>.
     * @alias module:model/OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo
     */
    constructor() { 
        
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo} obj Optional instance to populate.
     * @return {module:model/OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo} The populated <code>OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo();

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
                obj['properties'] = OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties.constructFromObject(data['properties']);
            }
            if (data.hasOwnProperty('bundle_location')) {
                obj['bundle_location'] = ApiClient.convertToType(data['bundle_location'], 'String');
            }
            if (data.hasOwnProperty('service_location')) {
                obj['service_location'] = ApiClient.convertToType(data['service_location'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.prototype['title'] = undefined;

/**
 * @member {String} description
 */
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.prototype['description'] = undefined;

/**
 * @member {module:model/OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties} properties
 */
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.prototype['properties'] = undefined;

/**
 * @member {String} bundle_location
 */
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.prototype['bundle_location'] = undefined;

/**
 * @member {String} service_location
 */
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo.prototype['service_location'] = undefined;






export default OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo;
