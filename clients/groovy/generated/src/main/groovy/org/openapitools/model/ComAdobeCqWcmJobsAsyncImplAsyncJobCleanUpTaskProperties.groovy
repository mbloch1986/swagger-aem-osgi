package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;

@Canonical
class ComAdobeCqWcmJobsAsyncImplAsyncJobCleanUpTaskProperties {
    ConfigNodePropertyString schedulerExpression = null

    ConfigNodePropertyInteger jobPurgeThreshold = null

    ConfigNodePropertyInteger jobPurgeMaxJobs = null

}
