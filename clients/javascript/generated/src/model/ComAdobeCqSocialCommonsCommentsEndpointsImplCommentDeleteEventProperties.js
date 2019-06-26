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
 * The ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties model module.
 * @module model/ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties
 * @version 1.0.0
 */
class ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties {
    /**
     * Constructs a new <code>ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties</code>.
     * @alias module:model/ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties
     */
    constructor() { 
        
        ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties} obj Optional instance to populate.
     * @return {module:model/ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties} The populated <code>ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties();

            if (data.hasOwnProperty('ranking')) {
                obj['ranking'] = ConfigNodePropertyInteger.constructFromObject(data['ranking']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ConfigNodePropertyInteger} ranking
 */
ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.prototype['ranking'] = undefined;






export default ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties;
