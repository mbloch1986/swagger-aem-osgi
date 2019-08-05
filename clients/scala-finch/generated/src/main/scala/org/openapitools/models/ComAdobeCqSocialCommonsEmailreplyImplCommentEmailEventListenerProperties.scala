package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ConfigNodePropertyString

/**
 * 
 * @param eventPeriodtopics 
 */
case class ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties(eventPeriodtopics: Option[ConfigNodePropertyString]
                )

object ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties {
    /**
     * Creates the codec for converting ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties] = deriveEncoder
}