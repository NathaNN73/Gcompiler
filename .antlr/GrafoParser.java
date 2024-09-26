// Generated from c:/Users/Ryzen/TEORIA DE COMPILADORES/Grafo.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class GrafoParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NUEVONODO=1, SETEARPOSICION=2, GRAFICARRUTA=3, BUSCARRUTA=4, A=5, NOMBRENODO=6, 
		RUTA=7, WS=8;
	public static final int
		RULE_grafo = 0, RULE_instruccion = 1, RULE_nuevoNodo = 2, RULE_setearPosicion = 3, 
		RULE_graficarRuta = 4, RULE_buscarRuta = 5;
	private static String[] makeRuleNames() {
		return new String[] {
			"grafo", "instruccion", "nuevoNodo", "setearPosicion", "graficarRuta", 
			"buscarRuta"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'nuevoNodo'", "'setearPosicion'", "'graficarRuta'", "'buscarRuta'", 
			"'a'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "NUEVONODO", "SETEARPOSICION", "GRAFICARRUTA", "BUSCARRUTA", "A", 
			"NOMBRENODO", "RUTA", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Grafo.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public GrafoParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GrafoContext extends ParserRuleContext {
		public InstruccionContext instruccion() {
			return getRuleContext(InstruccionContext.class,0);
		}
		public GrafoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_grafo; }
	}

	public final GrafoContext grafo() throws RecognitionException {
		GrafoContext _localctx = new GrafoContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_grafo);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(12);
			instruccion();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InstruccionContext extends ParserRuleContext {
		public NuevoNodoContext nuevoNodo() {
			return getRuleContext(NuevoNodoContext.class,0);
		}
		public SetearPosicionContext setearPosicion() {
			return getRuleContext(SetearPosicionContext.class,0);
		}
		public GraficarRutaContext graficarRuta() {
			return getRuleContext(GraficarRutaContext.class,0);
		}
		public BuscarRutaContext buscarRuta() {
			return getRuleContext(BuscarRutaContext.class,0);
		}
		public InstruccionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruccion; }
	}

	public final InstruccionContext instruccion() throws RecognitionException {
		InstruccionContext _localctx = new InstruccionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_instruccion);
		try {
			setState(18);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUEVONODO:
				enterOuterAlt(_localctx, 1);
				{
				setState(14);
				nuevoNodo();
				}
				break;
			case SETEARPOSICION:
				enterOuterAlt(_localctx, 2);
				{
				setState(15);
				setearPosicion();
				}
				break;
			case GRAFICARRUTA:
				enterOuterAlt(_localctx, 3);
				{
				setState(16);
				graficarRuta();
				}
				break;
			case BUSCARRUTA:
				enterOuterAlt(_localctx, 4);
				{
				setState(17);
				buscarRuta();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NuevoNodoContext extends ParserRuleContext {
		public TerminalNode NUEVONODO() { return getToken(GrafoParser.NUEVONODO, 0); }
		public TerminalNode NOMBRENODO() { return getToken(GrafoParser.NOMBRENODO, 0); }
		public TerminalNode RUTA() { return getToken(GrafoParser.RUTA, 0); }
		public NuevoNodoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nuevoNodo; }
	}

	public final NuevoNodoContext nuevoNodo() throws RecognitionException {
		NuevoNodoContext _localctx = new NuevoNodoContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_nuevoNodo);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(20);
			match(NUEVONODO);
			setState(21);
			match(NOMBRENODO);
			setState(22);
			match(RUTA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SetearPosicionContext extends ParserRuleContext {
		public TerminalNode SETEARPOSICION() { return getToken(GrafoParser.SETEARPOSICION, 0); }
		public List<TerminalNode> RUTA() { return getTokens(GrafoParser.RUTA); }
		public TerminalNode RUTA(int i) {
			return getToken(GrafoParser.RUTA, i);
		}
		public TerminalNode A() { return getToken(GrafoParser.A, 0); }
		public SetearPosicionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setearPosicion; }
	}

	public final SetearPosicionContext setearPosicion() throws RecognitionException {
		SetearPosicionContext _localctx = new SetearPosicionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_setearPosicion);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(24);
			match(SETEARPOSICION);
			setState(25);
			match(RUTA);
			setState(26);
			match(A);
			setState(27);
			match(RUTA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GraficarRutaContext extends ParserRuleContext {
		public TerminalNode GRAFICARRUTA() { return getToken(GrafoParser.GRAFICARRUTA, 0); }
		public TerminalNode NOMBRENODO() { return getToken(GrafoParser.NOMBRENODO, 0); }
		public TerminalNode RUTA() { return getToken(GrafoParser.RUTA, 0); }
		public GraficarRutaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_graficarRuta; }
	}

	public final GraficarRutaContext graficarRuta() throws RecognitionException {
		GraficarRutaContext _localctx = new GraficarRutaContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_graficarRuta);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29);
			match(GRAFICARRUTA);
			setState(30);
			match(NOMBRENODO);
			setState(31);
			match(RUTA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BuscarRutaContext extends ParserRuleContext {
		public TerminalNode BUSCARRUTA() { return getToken(GrafoParser.BUSCARRUTA, 0); }
		public List<TerminalNode> NOMBRENODO() { return getTokens(GrafoParser.NOMBRENODO); }
		public TerminalNode NOMBRENODO(int i) {
			return getToken(GrafoParser.NOMBRENODO, i);
		}
		public BuscarRutaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_buscarRuta; }
	}

	public final BuscarRutaContext buscarRuta() throws RecognitionException {
		BuscarRutaContext _localctx = new BuscarRutaContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_buscarRuta);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(33);
			match(BUSCARRUTA);
			setState(34);
			match(NOMBRENODO);
			setState(35);
			match(NOMBRENODO);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\b&\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0003\u0001\u0013\b\u0001\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0000\u0000\u0006\u0000\u0002"+
		"\u0004\u0006\b\n\u0000\u0000\"\u0000\f\u0001\u0000\u0000\u0000\u0002\u0012"+
		"\u0001\u0000\u0000\u0000\u0004\u0014\u0001\u0000\u0000\u0000\u0006\u0018"+
		"\u0001\u0000\u0000\u0000\b\u001d\u0001\u0000\u0000\u0000\n!\u0001\u0000"+
		"\u0000\u0000\f\r\u0003\u0002\u0001\u0000\r\u0001\u0001\u0000\u0000\u0000"+
		"\u000e\u0013\u0003\u0004\u0002\u0000\u000f\u0013\u0003\u0006\u0003\u0000"+
		"\u0010\u0013\u0003\b\u0004\u0000\u0011\u0013\u0003\n\u0005\u0000\u0012"+
		"\u000e\u0001\u0000\u0000\u0000\u0012\u000f\u0001\u0000\u0000\u0000\u0012"+
		"\u0010\u0001\u0000\u0000\u0000\u0012\u0011\u0001\u0000\u0000\u0000\u0013"+
		"\u0003\u0001\u0000\u0000\u0000\u0014\u0015\u0005\u0001\u0000\u0000\u0015"+
		"\u0016\u0005\u0006\u0000\u0000\u0016\u0017\u0005\u0007\u0000\u0000\u0017"+
		"\u0005\u0001\u0000\u0000\u0000\u0018\u0019\u0005\u0002\u0000\u0000\u0019"+
		"\u001a\u0005\u0007\u0000\u0000\u001a\u001b\u0005\u0005\u0000\u0000\u001b"+
		"\u001c\u0005\u0007\u0000\u0000\u001c\u0007\u0001\u0000\u0000\u0000\u001d"+
		"\u001e\u0005\u0003\u0000\u0000\u001e\u001f\u0005\u0006\u0000\u0000\u001f"+
		" \u0005\u0007\u0000\u0000 \t\u0001\u0000\u0000\u0000!\"\u0005\u0004\u0000"+
		"\u0000\"#\u0005\u0006\u0000\u0000#$\u0005\u0006\u0000\u0000$\u000b\u0001"+
		"\u0000\u0000\u0000\u0001\u0012";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}