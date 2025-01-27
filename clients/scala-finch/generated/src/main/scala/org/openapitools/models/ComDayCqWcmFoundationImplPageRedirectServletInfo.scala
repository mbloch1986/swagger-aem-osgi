package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComDayCqWcmFoundationImplPageRedirectServletProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class ComDayCqWcmFoundationImplPageRedirectServletInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComDayCqWcmFoundationImplPageRedirectServletProperties]
                )

object ComDayCqWcmFoundationImplPageRedirectServletInfo {
    /**
     * Creates the codec for converting ComDayCqWcmFoundationImplPageRedirectServletInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComDayCqWcmFoundationImplPageRedirectServletInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComDayCqWcmFoundationImplPageRedirectServletInfo] = deriveEncoder
}
