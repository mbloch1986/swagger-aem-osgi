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
 * The ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties model module.
 * @module model/ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties
 * @version 1.0.0
 */
class ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties {
    /**
     * Constructs a new <code>ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties</code>.
     * @alias module:model/ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties
     */
    constructor() { 
        
        ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties} obj Optional instance to populate.
     * @return {module:model/ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties} The populated <code>ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties();

            if (data.hasOwnProperty('cq.social.content.fragments.services.enabled')) {
                obj['cq.social.content.fragments.services.enabled'] = ConfigNodePropertyBoolean.constructFromObject(data['cq.social.content.fragments.services.enabled']);
            }
            if (data.hasOwnProperty('cq.social.content.fragments.services.waitTimeSeconds')) {
                obj['cq.social.content.fragments.services.waitTimeSeconds'] = ConfigNodePropertyInteger.constructFromObject(data['cq.social.content.fragments.services.waitTimeSeconds']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyBoolean} cq.social.content.fragments.services.enabled
 */
ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties.prototype['cq.social.content.fragments.services.enabled'] = undefined;

/**
 * @member {module:model/ConfigNodePropertyInteger} cq.social.content.fragments.services.waitTimeSeconds
 */
ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties.prototype['cq.social.content.fragments.services.waitTimeSeconds'] = undefined;






export default ComAdobeCqSocialContentFragmentsServicesImplCommunitiesFragmentCreationServiceImplProperties;

