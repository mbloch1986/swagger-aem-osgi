package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo._

case class ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo {
  import DateTimeCodecs._

  implicit val ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfoCodecJson: CodecJson[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo] = CodecJson.derive[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo]
  implicit val ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfoDecoder: EntityDecoder[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo] = jsonOf[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo]
  implicit val ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfoEncoder: EntityEncoder[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo] = jsonEncoderOf[ComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerInfo]
}
