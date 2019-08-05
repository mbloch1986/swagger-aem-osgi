/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class ComAdobeGraniteOffloadingImplTransporterOffloadingDefaultTranspoProperties(
  defaultPeriodtransportPeriodagentMinustoMinusworkerPeriodprefix: Option[ConfigNodePropertyString],

  defaultPeriodtransportPeriodagentMinustoMinusmasterPeriodprefix: Option[ConfigNodePropertyString],

  defaultPeriodtransportPeriodinputPeriodpackage: Option[ConfigNodePropertyString],

  defaultPeriodtransportPeriodoutputPeriodpackage: Option[ConfigNodePropertyString],

  defaultPeriodtransportPeriodreplicationPeriodsynchronous: Option[ConfigNodePropertyBoolean],

  defaultPeriodtransportPeriodcontentpackage: Option[ConfigNodePropertyBoolean],

  offloadingPeriodtransporterPerioddefaultPeriodenabled: Option[ConfigNodePropertyBoolean]

 )