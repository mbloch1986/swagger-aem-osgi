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
import ConfigNodePropertyInteger from './ConfigNodePropertyInteger';

/**
 * The ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties model module.
 * @module model/ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties
 * @version 1.0.0
 */
class ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties {
    /**
     * Constructs a new <code>ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties</code>.
     * @alias module:model/ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties
     */
    constructor() { 
        
        ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties} obj Optional instance to populate.
     * @return {module:model/ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties} The populated <code>ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties();

            if (data.hasOwnProperty('priority')) {
                obj['priority'] = ConfigNodePropertyInteger.constructFromObject(data['priority']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyInteger} priority
 */
ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties.prototype['priority'] = undefined;






export default ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialComponentFactoryProperties;

