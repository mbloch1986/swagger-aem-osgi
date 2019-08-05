package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeGraniteAuthOauthAccesstokenProviderProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class ComAdobeGraniteAuthOauthAccesstokenProviderInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeGraniteAuthOauthAccesstokenProviderProperties]
                )

object ComAdobeGraniteAuthOauthAccesstokenProviderInfo {
    /**
     * Creates the codec for converting ComAdobeGraniteAuthOauthAccesstokenProviderInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeGraniteAuthOauthAccesstokenProviderInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeGraniteAuthOauthAccesstokenProviderInfo] = deriveEncoder
}