package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo {
    /**
     * Creates the codec for converting ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo] = deriveEncoder
}
