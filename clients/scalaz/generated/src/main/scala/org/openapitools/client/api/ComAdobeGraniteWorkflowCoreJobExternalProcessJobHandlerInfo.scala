package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo._

case class ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties])

object ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfoCodecJson: CodecJson[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo] = CodecJson.derive[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo]
  implicit val ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfoDecoder: EntityDecoder[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo] = jsonOf[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo]
  implicit val ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfoEncoder: EntityEncoder[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo] = jsonEncoderOf[ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerInfo]
}
