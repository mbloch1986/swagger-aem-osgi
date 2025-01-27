package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyString;

@Canonical
class ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties {
    ConfigNodePropertyString path = null

    ConfigNodePropertyArray oauthClientIdsAllowed = null

    ConfigNodePropertyBoolean authBearerSyncIms = null

    ConfigNodePropertyString authTokenRequestParameter = null

    ConfigNodePropertyString oauthBearerConfigid = null

    ConfigNodePropertyBoolean oauthJwtSupport = null

}
