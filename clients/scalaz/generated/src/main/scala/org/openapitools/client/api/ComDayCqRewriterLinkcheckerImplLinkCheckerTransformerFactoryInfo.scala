package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo._

case class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties])

object ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo {
  import DateTimeCodecs._

  implicit val ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoCodecJson: CodecJson[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo] = CodecJson.derive[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo]
  implicit val ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoDecoder: EntityDecoder[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo] = jsonOf[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo]
  implicit val ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoEncoder: EntityEncoder[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo] = jsonEncoderOf[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo]
}
