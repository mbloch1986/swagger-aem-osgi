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
package org.openapitools.client.models

import org.openapitools.client.models.ConfigNodePropertyBoolean
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param sslMinusforwardPeriodheader 
 * @param sslMinusforwardPeriodvalue 
 * @param sslMinusforwardMinuscertPeriodheader 
 * @param rewritePeriodabsolutePeriodurls 
 */
data class OrgApacheFelixHttpSslfilterSslFilterProperties (
    val sslMinusforwardPeriodheader: ConfigNodePropertyString? = null,
    val sslMinusforwardPeriodvalue: ConfigNodePropertyString? = null,
    val sslMinusforwardMinuscertPeriodheader: ConfigNodePropertyString? = null,
    val rewritePeriodabsolutePeriodurls: ConfigNodePropertyBoolean? = null
) {

}

