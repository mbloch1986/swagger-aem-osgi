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
import ConfigNodePropertyBoolean from './ConfigNodePropertyBoolean';
import ConfigNodePropertyInteger from './ConfigNodePropertyInteger';

/**
 * The ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties model module.
 * @module model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties
 * @version 1.0.0
 */
class ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties {
    /**
     * Constructs a new <code>ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties</code>.
     * @alias module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties
     */
    constructor() { 
        
        ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties} obj Optional instance to populate.
     * @return {module:model/ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties} The populated <code>ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties();

            if (data.hasOwnProperty('accepted')) {
                obj['accepted'] = ConfigNodePropertyBoolean.constructFromObject(data['accepted']);
            }
            if (data.hasOwnProperty('ranked')) {
                obj['ranked'] = ConfigNodePropertyInteger.constructFromObject(data['ranked']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyBoolean} accepted
 */
ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties.prototype['accepted'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} ranked
 */
ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties.prototype['ranked'] = undefined;






export default ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtensionProperties;

