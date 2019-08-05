package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyDropDown;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;

@Canonical
class OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    ConfigNodePropertyString name = null

    ConfigNodePropertyString title = null

    ConfigNodePropertyString details = null

    ConfigNodePropertyBoolean enabled = null

    ConfigNodePropertyString serviceName = null

    ConfigNodePropertyDropDown logLevel = null

    ConfigNodePropertyArray allowedRoots = null

    ConfigNodePropertyBoolean queueProcessingEnabled = null

    ConfigNodePropertyArray packageImporterEndpoints = null

    ConfigNodePropertyArray passiveQueues = null

    ConfigNodePropertyArray priorityQueues = null

    ConfigNodePropertyDropDown retryStrategy = null

    ConfigNodePropertyInteger retryAttempts = null

    ConfigNodePropertyString requestAuthorizationStrategyTarget = null

    ConfigNodePropertyString transportSecretProviderTarget = null

    ConfigNodePropertyString packageBuilderTarget = null

    ConfigNodePropertyString triggersTarget = null

    ConfigNodePropertyDropDown queueProvider = null

    ConfigNodePropertyBoolean asyncDelivery = null

    ConfigNodePropertyInteger httpConnTimeout = null

}