package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ConfigNodePropertyBoolean;
import org.openapitools.model.ConfigNodePropertyInteger;
import org.openapitools.model.ConfigNodePropertyString;

@Canonical
class OrgApacheSlingI18nImplJcrResourceBundleProviderProperties {
    ConfigNodePropertyString localeDefault = null

    ConfigNodePropertyBoolean preloadBundles = null

    ConfigNodePropertyInteger invalidationDelay = null

}
