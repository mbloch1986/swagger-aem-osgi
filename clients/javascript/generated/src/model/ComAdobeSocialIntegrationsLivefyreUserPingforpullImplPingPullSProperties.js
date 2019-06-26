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
import ConfigNodePropertyString from './ConfigNodePropertyString';

/**
 * The ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties model module.
 * @module model/ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties
 * @version 1.0.0
 */
class ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties {
    /**
     * Constructs a new <code>ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties</code>.
     * @alias module:model/ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties
     */
    constructor() { 
        
        ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties} obj Optional instance to populate.
     * @return {module:model/ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties} The populated <code>ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties();

            if (data.hasOwnProperty('communities.integration.livefyre.sling.event.filter')) {
                obj['communities.integration.livefyre.sling.event.filter'] = ConfigNodePropertyString.constructFromObject(data['communities.integration.livefyre.sling.event.filter']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyString} communities.integration.livefyre.sling.event.filter
 */
ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties.prototype['communities.integration.livefyre.sling.event.filter'] = undefined;






export default ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties;
