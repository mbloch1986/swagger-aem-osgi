/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model


case class OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties (
  resourceResolverSearchpath: Option[ConfigNodePropertyArray] = None,
  resourceResolverManglenamespaces: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverAllowDirect: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverRequiredProviders: Option[ConfigNodePropertyArray] = None,
  resourceResolverRequiredProvidernames: Option[ConfigNodePropertyArray] = None,
  resourceResolverVirtual: Option[ConfigNodePropertyArray] = None,
  resourceResolverMapping: Option[ConfigNodePropertyArray] = None,
  resourceResolverMapLocation: Option[ConfigNodePropertyString] = None,
  resourceResolverMapObservation: Option[ConfigNodePropertyArray] = None,
  resourceResolverDefaultVanityRedirectStatus: Option[ConfigNodePropertyInteger] = None,
  resourceResolverEnableVanitypath: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverVanitypathMaxEntries: Option[ConfigNodePropertyInteger] = None,
  resourceResolverVanitypathMaxEntriesStartup: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverVanitypathBloomfilterMaxBytes: Option[ConfigNodePropertyInteger] = None,
  resourceResolverOptimizeAliasResolution: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverVanitypathWhitelist: Option[ConfigNodePropertyArray] = None,
  resourceResolverVanitypathBlacklist: Option[ConfigNodePropertyArray] = None,
  resourceResolverVanityPrecedence: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverProviderhandlingParanoid: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverLogClosing: Option[ConfigNodePropertyBoolean] = None,
  resourceResolverLogUnclosed: Option[ConfigNodePropertyBoolean] = None
)
