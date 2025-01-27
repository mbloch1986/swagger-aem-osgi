package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenProperties]
                )

object ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo {
    /**
     * Creates the codec for converting ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenInfo] = deriveEncoder
}
