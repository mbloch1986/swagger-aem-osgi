package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo._

case class ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties])

object ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfoCodecJson: CodecJson[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo] = CodecJson.derive[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo]
  implicit val ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfoDecoder: EntityDecoder[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo] = jsonOf[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo]
  implicit val ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfoEncoder: EntityEncoder[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo] = jsonEncoderOf[ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImInfo]
}
