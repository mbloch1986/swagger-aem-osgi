package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplInfo {
    /**
     * Creates the codec for converting ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeAemUpgradePrechecksMbeanImplPreUpgradeTasksMBeanImplInfo] = deriveEncoder
}