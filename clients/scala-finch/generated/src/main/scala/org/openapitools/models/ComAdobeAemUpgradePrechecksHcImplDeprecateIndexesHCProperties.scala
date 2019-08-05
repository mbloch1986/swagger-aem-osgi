package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ConfigNodePropertyArray
import org.openapitools.models.ConfigNodePropertyString

/**
 * 
 * @param hcPeriodname 
 * @param hcPeriodtags 
 * @param hcPeriodmbeanPeriodname 
 */
case class ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties(hcPeriodname: Option[ConfigNodePropertyString],
                hcPeriodtags: Option[ConfigNodePropertyArray],
                hcPeriodmbeanPeriodname: Option[ConfigNodePropertyString]
                )

object ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties {
    /**
     * Creates the codec for converting ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties] = deriveEncoder
}