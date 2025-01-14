package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo._

case class ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties])

object ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoCodecJson: CodecJson[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo] = CodecJson.derive[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo]
  implicit val ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoDecoder: EntityDecoder[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo] = jsonOf[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo]
  implicit val ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoEncoder: EntityEncoder[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo] = jsonEncoderOf[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo]
}
