package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ConfigNodePropertyBoolean

/**
 * 
 * @param corsPeriodenabling 
 */
case class ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties(corsPeriodenabling: Option[ConfigNodePropertyBoolean]
                )

object ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties {
    /**
     * Creates the codec for converting ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties] = deriveEncoder
}