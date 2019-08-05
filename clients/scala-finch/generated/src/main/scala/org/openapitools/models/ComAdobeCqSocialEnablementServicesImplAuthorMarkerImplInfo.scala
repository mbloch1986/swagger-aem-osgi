package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplInfo {
    /**
     * Creates the codec for converting ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplInfo] = deriveEncoder
}