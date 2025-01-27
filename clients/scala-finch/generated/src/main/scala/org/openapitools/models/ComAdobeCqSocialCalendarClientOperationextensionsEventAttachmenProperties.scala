package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ConfigNodePropertyInteger
import org.openapitools.models.ConfigNodePropertyString

/**
 * 
 * @param attachmentTypeBlacklist 
 * @param extensionPeriodorder 
 */
case class ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties(attachmentTypeBlacklist: Option[ConfigNodePropertyString],
                extensionPeriodorder: Option[ConfigNodePropertyInteger]
                )

object ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties {
    /**
     * Creates the codec for converting ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties] = deriveEncoder
}
