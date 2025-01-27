package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplProperties]
                )

object ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplInfo {
    /**
     * Creates the codec for converting ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeGraniteCompatrouterImplCompatSwitchingServiceImplInfo] = deriveEncoder
}
