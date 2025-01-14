package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo._

case class ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties])

object ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfoCodecJson: CodecJson[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo] = CodecJson.derive[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo]
  implicit val ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfoDecoder: EntityDecoder[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo] = jsonOf[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo]
  implicit val ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfoEncoder: EntityEncoder[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo] = jsonEncoderOf[ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceInfo]
}
