package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;

@Canonical
class OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties {
    ConfigNodePropertyString tokenExpiration = null

    ConfigNodePropertyString tokenLength = null

    ConfigNodePropertyBoolean tokenRefresh = null

    ConfigNodePropertyInteger tokenCleanupThreshold = null

    ConfigNodePropertyString passwordHashAlgorithm = null

    ConfigNodePropertyInteger passwordHashIterations = null

    ConfigNodePropertyInteger passwordSaltSize = null

}