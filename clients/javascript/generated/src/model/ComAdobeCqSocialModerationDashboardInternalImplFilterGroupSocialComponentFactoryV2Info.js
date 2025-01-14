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
import ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Properties from './ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Properties';

/**
 * The ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info model module.
 * @module model/ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info
 * @version 1.0.0
 */
class ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info {
    /**
     * Constructs a new <code>ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info</code>.
     * @alias module:model/ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info
     */
    constructor() { 
        
        ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info} obj Optional instance to populate.
     * @return {module:model/ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info} The populated <code>ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info();

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
                obj['properties'] = ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Properties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} pid
 */
ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info.prototype['pid'] = undefined;

/**
 * @member {String} title
 */
ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info.prototype['title'] = undefined;

/**
 * @member {String} description
 */
ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info.prototype['description'] = undefined;

/**
 * @member {module:model/ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Properties} properties
 */
ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info.prototype['properties'] = undefined;






export default ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSocialComponentFactoryV2Info;

