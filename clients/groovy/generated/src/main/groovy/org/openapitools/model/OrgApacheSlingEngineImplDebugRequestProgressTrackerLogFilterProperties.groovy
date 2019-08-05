package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyArray;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;

@Canonical
class OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties {
    ConfigNodePropertyArray extensions = null

    ConfigNodePropertyInteger minDurationMs = null

    ConfigNodePropertyInteger maxDurationMs = null

    ConfigNodePropertyBoolean compactLogFormat = null

}