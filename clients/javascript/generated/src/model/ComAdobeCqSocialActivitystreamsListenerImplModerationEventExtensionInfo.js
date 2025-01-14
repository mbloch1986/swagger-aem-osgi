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
import ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties from './ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties';

/**
 * The ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo model module.
 * @module model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo
 * @version 1.0.0
 */
class ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo {
    /**
     * Constructs a new <code>ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo</code>.
     * @alias module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo
     */
    constructor() { 
        
        ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo} obj Optional instance to populate.
     * @return {module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo} The populated <code>ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo();

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
                obj['properties'] = ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo.prototype['title'] = undefined;

/**
 * @member {String} description
 */
ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo.prototype['description'] = undefined;

/**
 * @member {module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties} properties
 */
ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo.prototype['properties'] = undefined;






export default ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionInfo;

